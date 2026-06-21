// addr: 0x00f9f370
// name: BinXML_byteSwapUInt64
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: ulonglong BinXML_byteSwapUInt64(uint * words) */

ulonglong __fastcall BinXML_byteSwapUInt64(uint *words)

{
  uint uVar1;
  uint uVar2;
  
                    /* Byte-swaps two 32-bit words and combines them into a 64-bit value. It is used
                       by the BinXML 8-byte primitive reader after reading the raw payload. */
  uVar1 = *words;
  uVar2 = words[1];
  return CONCAT44((uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 & 0xff00 | uVar1 << 0x10) << 8,
                  (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 | (uVar2 & 0xff00 | uVar2 << 0x10) << 8);
}

