class RegionFactory(object):
    '''The RegionFactory class assigns region IDs
       First region id is always @ (outside)
       Subsequent ids are A-Z
       TODO: Allow more than 27 regions (@,A-Z)
    '''
    def __init__(self):
        '''RegionFactory constructor

           Args:
               None
           Returns:
               A new RegionFactory object
           Throws:
               None
        '''
        self.last_assinged_region_id = None

    @staticmethod
    def get_first_region_id():
        '''Static method that returns the 1st region id, i.e. outside

           Args:
               None
           Returns:
               Returns the first region ID.  Used as outside region.
           Raises:
               None
        '''
        return '@'

    def get_region_after(self, region_id):
        '''Return region after specified region
           Note: Regions currently limited to [outside, 'A'..'Z']

           Args:
               region_id: Specified region
           Returns:
               Returns region after specified region
           Raises:
               Exception: No more region identifiers.
        '''
        if region_id >= 'Z':
            raise Exception("No more region identifiers")
        if region_id == None:
            return self.get_first_region_id()
        return chr(ord(region_id) + 1)

    def get_next_region_id(self):
        '''Return region_id after last_assigned_region_id

           Args:
               None
           Returns:
               Returns region after last assigned region.
           Raises:
               Exception: No more region identifiers.
        '''
        self.last_assinged_region_id = self.get_region_after(
                                                self.last_assinged_region_id)
        return self.last_assinged_region_id

    def get_last_region_id(self):
        '''Return last assigned region, or None if no regions assigned yet.

           Args:
               None
           Returns:
               Returns last assigned region, or None if no regions assigned yet
           Raises:
               None
        '''
        return self.last_assinged_region_id

    def reset_region_id(self):
        '''Starts region numbering over at the beginning, so that the next
           region to be returned will be outside.

           Args:
               None
           Returns:
               None
           Raises:
               None
        '''
        self.last_assinged_region_id = None
