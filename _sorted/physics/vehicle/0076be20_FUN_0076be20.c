// addr: 0x0076be20
// name: FUN_0076be20
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint FUN_0076be20(ushort typeId_) */

uint FUN_0076be20(ushort typeId_)

{
                    /* Maps a small set of 16-bit type IDs to fixed numeric IDs and returns 0 for
                       unhandled cases. No class/file evidence is present, so the semantic target of
                       the mapping is unclear. */
  switch(typeId_) {
  case 2:
  case 6:
  case 0xb:
    return 0x65;
  default:
    return 0;
  case 0xc:
  case 0x19:
    return 0xd3;
  case 0xd:
    return 0xd4;
  case 0xe:
    return 0xd5;
  case 0xf:
    return 0xd6;
  case 0x10:
    return 0x137;
  case 0x11:
    return 0x138;
  case 0x12:
    return 0x139;
  case 0x13:
    return 0x19b;
  case 0x14:
    return 0x19c;
  case 0x15:
    return 0x19d;
  case 0x16:
    return 0x19e;
  case 0x1a:
    return 0x66;
  case 0x1b:
    return 0x1ff;
  case 0x1c:
    return 0x200;
  case 0x1d:
    return 0x201;
  case 0x1e:
    return 0x69;
  case 0x1f:
    return 0x6a;
  case 0x20:
    return 0x6b;
  case 0x21:
    return 0x202;
  case 0x22:
    return 0x203;
  case 0x23:
    return 0x204;
  case 0x27:
    return 0x263;
  case 0x28:
    return 0x264;
  case 0x29:
    return 0x265;
  case 0x2b:
    return 0x266;
  }
}

