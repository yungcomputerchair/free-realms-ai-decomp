// addr: 0x00f9ead0
// name: SCEA_BinXML_String_flatten
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SCEA_BinXML_String_flatten(void * this) */

void __fastcall SCEA_BinXML_String_flatten(void *this)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  void *_Src;
  uint uVar4;
  size_t sStack_4;
  
                    /* Flattens a composite/chunked BinXML String into one NUL-terminated owned
                       buffer, or assigns the shared empty buffer for zero length. It iterates
                       Streamable chunks, memmoves them into a new allocation, then sets owned
                       storage. */
  if ((*(char *)((int)this + 4) == '\0') || (*(void **)((int)this + 0xc) == (void *)0x0)) {
    if ((*(int *)((int)this + 8) == 0) || (*(int *)((int)this + 0xc) == 0)) {
      SCEA_BinXML_String_assignCString(*(undefined4 *)((int)this + 0xc),0xffffffff);
      return;
    }
  }
  else {
    uVar2 = SCEA_BinXML_Streamable_getLength(*(void **)((int)this + 0xc));
    if (uVar2 != 0) {
      pvVar3 = Mem_Alloc(uVar2 + 1);
      uVar4 = 0;
      if (uVar2 != 0) {
        do {
          _Src = (void *)SCEA_BinXML_Streamable_nextChunk(&sStack_4);
          _memmove((void *)(uVar4 + (int)pvVar3),_Src,sStack_4);
          uVar4 = uVar4 + sStack_4;
        } while (uVar4 < uVar2);
      }
      cVar1 = *(char *)((int)pvVar3 + (uVar2 - 1));
      *(undefined1 *)((int)pvVar3 + uVar2) = 0;
      if (cVar1 != '\0') {
        uVar2 = uVar2 + 1;
      }
      SCEA_BinXML_Streamable_setOwnedBuffer(pvVar3,uVar2);
      return;
    }
    SCEA_BinXML_Streamable_setBorrowedBuffer(&DAT_0175b400,0);
  }
  return;
}

