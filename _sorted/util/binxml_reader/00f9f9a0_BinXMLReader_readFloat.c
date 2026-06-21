// addr: 0x00f9f9a0
// name: BinXMLReader_readFloat
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: float BinXMLReader_readFloat(void * reader) */

float __fastcall BinXMLReader_readFloat(void *reader)

{
  uint uVar1;
  char cVar2;
  uint unaff_EDI;
  undefined1 local_c [12];
  
                    /* Reads a 4-byte big-endian value from the current element and returns it as a
                       float. The binxml_reader.cpp assertion checks remainingInElement against
                       sizeof(v), and many deserializers store the result in float fields. */
  if (((DAT_01cb4d50 != (int *)0x0) && (DAT_01b982ac != '\0')) && (4 < *(uint *)((int)reader + 0xc))
     ) {
    (**(code **)(*DAT_01cb4d50 + 4))
              (DAT_01cb4d50,&DAT_01b982b0,0x20,1,0x9f,".\\binxml_reader.cpp",0x8a,
               "!(m_remainingInElement > sizeof(v))");
  }
  uVar1 = *(uint *)((int)reader + 0xc);
  if (4 < uVar1) {
    SCEA_BinXML_BadStream_ctor();
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c,&DAT_01a62e58);
  }
  cVar2 = (**(code **)(**(int **)reader + 4))(local_c + -uVar1,uVar1);
  if (cVar2 != '\0') {
    *(int *)((int)reader + 4) = *(int *)((int)reader + 4) + *(int *)((int)reader + 0xc);
    *(undefined4 *)((int)reader + 0xc) = 0;
  }
  return (float)((unaff_EDI & 0xff0000 | unaff_EDI >> 0x10) >> 8 |
                (unaff_EDI & 0xff00 | unaff_EDI << 0x10) << 8);
}

