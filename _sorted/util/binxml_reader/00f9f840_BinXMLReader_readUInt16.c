// addr: 0x00f9f840
// name: BinXMLReader_readUInt16
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: ushort BinXMLReader_readUInt16(void * reader) */

ushort __fastcall BinXMLReader_readUInt16(void *reader)

{
  uint uVar1;
  char cVar2;
  ushort unaff_DI;
  undefined1 auStack_e [14];
  
                    /* Reads a 16-bit big-endian value from the current element and byte-swaps it
                       before returning. It throws BadStream if remainingInElement exceeds
                       sizeof(v), from binxml_reader.cpp line 0x6c. */
  if (((DAT_01cb4d50 != (int *)0x0) && (DAT_01b982ac != '\0')) && (2 < *(uint *)((int)reader + 0xc))
     ) {
    (**(code **)(*DAT_01cb4d50 + 4))
              (DAT_01cb4d50,&DAT_01b982b0,0x20,1,0x9f,".\\binxml_reader.cpp",0x6c,
               "!(m_remainingInElement > sizeof(v))");
  }
  uVar1 = *(uint *)((int)reader + 0xc);
  if (2 < uVar1) {
    SCEA_BinXML_BadStream_ctor();
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(auStack_e + 2,&DAT_01a62e58);
  }
  cVar2 = (**(code **)(**(int **)reader + 4))(auStack_e + -uVar1,uVar1);
  if (cVar2 != '\0') {
    *(int *)((int)reader + 4) = *(int *)((int)reader + 4) + *(int *)((int)reader + 0xc);
    *(undefined4 *)((int)reader + 0xc) = 0;
  }
  return unaff_DI << 8 | unaff_DI >> 8;
}

