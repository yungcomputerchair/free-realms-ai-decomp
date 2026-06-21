// addr: 0x00f9ea00
// name: SCEA_BinXML_String_StrLen
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint SCEA_BinXML_String_StrLen(void * this) */

uint __fastcall SCEA_BinXML_String_StrLen(void *this)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  
                    /* Returns the string length, using the Streamable length for composite strings
                       or strlen-like scanning for a flat C string. It is referenced by the
                       BinXMLReader_readString assertion ret.StrLen()+1 == len. */
  if ((*(char *)((int)this + 4) != '\0') && (*(void **)((int)this + 0xc) != (void *)0x0)) {
    uVar3 = SCEA_BinXML_Streamable_getLength(*(void **)((int)this + 0xc));
    return uVar3;
  }
  pcVar4 = *(char **)((int)this + 0xc);
  if (pcVar4 != (char *)0x0) {
    pcVar1 = pcVar4 + 1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    return (int)pcVar4 - (int)pcVar1;
  }
  return 0;
}

