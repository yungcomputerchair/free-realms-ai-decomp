// addr: 0x012ae9a0
// name: PropertyId_getRemappedRangeTypeId
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint PropertyId_getRemappedRangeTypeId(int propertyId) */

uint PropertyId_getRemappedRangeTypeId(int propertyId)

{
                    /* Maps selected hundred-thousand buckets 0x3f2..0x40e to consecutive type ids
                       0x05f63491..0x05f6349f, returning -1 for unsupported buckets. Evidence is the
                       switch on propertyId/100000 and the compact table of constants. */
  switch(propertyId / 100000) {
  case 0x3f2:
    return 0x5f63491;
  default:
    return 0xffffffff;
  case 0x3f4:
    return 0x5f63492;
  case 0x3f6:
    return 0x5f63493;
  case 0x3f8:
    return 0x5f63494;
  case 0x3fa:
    return 0x5f63495;
  case 0x3fc:
    return 0x5f63496;
  case 0x3fe:
    return 0x5f63497;
  case 0x400:
    return 0x5f63498;
  case 0x402:
    return 0x5f63499;
  case 0x404:
    return 0x5f6349a;
  case 0x406:
    return 0x5f6349b;
  case 0x408:
    return 0x5f6349c;
  case 0x40a:
    return 0x5f6349d;
  case 0x40c:
    return 0x5f6349e;
  case 0x40e:
    return 0x5f6349f;
  }
}

