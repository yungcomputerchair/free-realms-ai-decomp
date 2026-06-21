// addr: 0x010e1470
// name: BigEndian_writeInt64_010e1470
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint BigEndian_writeInt64_010e1470(byte * outBytes, byte lowByte_, uint
   highDword_) */

uint __cdecl BigEndian_writeInt64_010e1470(byte *outBytes,byte lowByte_,uint highDword_)

{
  longlong lVar1;
  
                    /* Writes an eight-byte big-endian integer representation and returns 8; used in
                       UDP packet processing paths. */
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

