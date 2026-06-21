// addr: 0x012ae960
// name: PropertyId_normalizeRemappedRange
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyId_normalizeRemappedRange(int propertyId) */

int PropertyId_normalizeRemappedRange(int propertyId)

{
                    /* Normalizes property ids in buckets >=1010 down into the base 1000 bucket
                       while preserving the low five decimal digits; ids outside that range are
                       returned unchanged. Evidence is the same bucket threshold as 012ae930 and
                       formula (1000-bucket)*100000+id. */
  if (-1 < propertyId / 100000 + -0x3f2) {
    return (1000 - propertyId / 100000) * 100000 + propertyId;
  }
  return propertyId;
}

