// addr: 0x00f9f7a0
// name: BinXMLReader_readUInt8
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: byte BinXMLReader_readUInt8(void * reader) */

byte __fastcall BinXMLReader_readUInt8(void *reader)

{
  uint uVar1;
  char cVar2;
  undefined4 unaff_EDI;
  byte bVar3;
  undefined1 local_c [12];
  
                    /* Reads up to one byte from the current binary XML element, advances the reader
                       position, clears remainingInElement, and throws BadStream if the element
                       payload is larger than the destination. Evidence is binxml_reader.cpp
                       assertion !(m_remainingInElement > sizeof(v)) at line 0x62 and byte-sized
                       return. */
  bVar3 = (byte)((uint)unaff_EDI >> 0x18);
  if (((DAT_01cb4d50 != (int *)0x0) && (DAT_01b982ac != '\0')) && (1 < *(uint *)((int)reader + 0xc))
     ) {
    (**(code **)(*DAT_01cb4d50 + 4))
              (DAT_01cb4d50,&DAT_01b982b0,0x20,1,0x9f,".\\binxml_reader.cpp",0x62,
               "!(m_remainingInElement > sizeof(v))");
  }
  uVar1 = *(uint *)((int)reader + 0xc);
  if (1 < uVar1) {
    SCEA_BinXML_BadStream_ctor();
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c,&DAT_01a62e58);
  }
  cVar2 = (**(code **)(**(int **)reader + 4))(local_c + -uVar1,uVar1);
  if (cVar2 != '\0') {
    *(int *)((int)reader + 4) = *(int *)((int)reader + 4) + *(int *)((int)reader + 0xc);
    *(undefined4 *)((int)reader + 0xc) = 0;
  }
  return bVar3;
}

