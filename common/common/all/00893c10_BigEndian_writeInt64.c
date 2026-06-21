// addr: 0x00893c10
// name: BigEndian_writeInt64
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint BigEndian_writeInt64(byte * outBytes, byte lowByte_, uint highDword_) */

uint __cdecl BigEndian_writeInt64(byte *outBytes,byte lowByte_,uint highDword_)

{
  longlong lVar1;
  
                    /* Writes an eight-byte big-endian integer representation to outBytes and
                       returns the fixed byte count 8. */
  *outBytes = (byte)(highDword_ >> 0x18);
  outBytes[1] = (byte)(highDword_ >> 0x10);
  outBytes[2] = (byte)(highDword_ >> 8);
  outBytes[3] = (byte)highDword_;
  lVar1 = __allshr(0x18,highDword_);
  outBytes[4] = (byte)lVar1;
  lVar1 = __allshr(0x10,highDword_);
  outBytes[5] = (byte)lVar1;
  lVar1 = __allshr(8,highDword_);
  outBytes[6] = (byte)lVar1;
  outBytes[7] = lowByte_;
  return 8;
}

