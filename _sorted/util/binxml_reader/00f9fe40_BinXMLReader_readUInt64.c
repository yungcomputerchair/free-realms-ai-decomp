// addr: 0x00f9fe40
// name: BinXMLReader_readUInt64
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: ulonglong BinXMLReader_readUInt64(void * reader) */

ulonglong __fastcall BinXMLReader_readUInt64(void *reader)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 local_c [12];
  
                    /* Reads an eight-byte big-endian primitive from the current element, advances
                       reader state, and byte-swaps the two words through the helper at 00f9f370. It
                       throws BadStream if remainingInElement is larger than sizeof(v), per
                       binxml_reader.cpp line 0x80. */
  if (((DAT_01cb4d50 != (int *)0x0) && (DAT_01b982ac != '\0')) && (8 < *(uint *)((int)reader + 0xc))
     ) {
    (**(code **)(*DAT_01cb4d50 + 4))
              (DAT_01cb4d50,&DAT_01b982b0,0x20,1,0x9f,".\\binxml_reader.cpp",0x80);
  }
  uVar1 = *(uint *)((int)reader + 0xc);
  if (8 < uVar1) {
    SCEA_BinXML_BadStream_ctor();
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c);
  }
  cVar2 = (**(code **)(**(int **)reader + 4))(local_c + -uVar1,uVar1);
  if (cVar2 != '\0') {
    *(int *)((int)reader + 4) = *(int *)((int)reader + 4) + *(int *)((int)reader + 0xc);
    *(undefined4 *)((int)reader + 0xc) = 0;
  }
  uVar3 = BinXML_byteSwapUInt64((uint *)&stack0xffffffe4);
  return uVar3;
}

