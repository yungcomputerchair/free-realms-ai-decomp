// addr: 0x00d87540
// name: __allshr
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: longlong __allshr(byte shiftCount_, int highDword_) */

longlong __fastcall __allshr(byte shiftCount_,int highDword_)

{
  uint in_EAX;
  int iVar1;
  
                    /* Visual Studio helper for arithmetic right-shifting a signed 64-bit value held
                       in EDX:EAX by the requested count. */
  iVar1 = highDword_ >> 0x1f;
  if (0x3f < shiftCount_) {
    return CONCAT44(iVar1,iVar1);
  }
  if (shiftCount_ < 0x20) {
    return CONCAT44(highDword_ >> (shiftCount_ & 0x1f),
                    in_EAX >> (shiftCount_ & 0x1f) | highDword_ << 0x20 - (shiftCount_ & 0x1f));
  }
  return CONCAT44(iVar1,highDword_ >> (shiftCount_ & 0x1f));
}

