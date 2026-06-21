// addr: 0x012ae930
// name: PropertyId_isRemappedRange
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PropertyId_isRemappedRange(int propertyId) */

bool PropertyId_isRemappedRange(int propertyId)

{
                    /* Returns true when the property id's hundred-thousand bucket is at least 0x3f2
                       (1010), identifying ids in the remapped high range. Evidence is the direct
                       bucket check param/100000 - 0x3f2 and callers in synchronization/property
                       paths. */
  return -1 < propertyId / 100000 + -0x3f2;
}

