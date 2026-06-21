// addr: 0x00f9e5b0
// name: SCEA_BinXML_Streamable_copyFrom
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SCEA_BinXML_Streamable_copyFrom(void * this, void * src) */

void __thiscall SCEA_BinXML_Streamable_copyFrom(void *this,void *src)

{
  int *piVar1;
  char cVar2;
  
                    /* Copies a Streamable, either aliasing another streamable if the source reports
                       composite storage or copying buffer pointers/flags and incrementing the
                       reference count. Evidence is the shared vtable-style calls and refcount
                       increment at source offset 8. */
  cVar2 = (**(code **)(*(int *)src + 8))();
  if (cVar2 != '\0') {
    *(void **)((int)this + 0xc) = src;
    *(undefined1 *)((int)this + 4) = 1;
    return;
  }
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)src + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)src + 0x10);
  *(undefined1 *)((int)this + 4) = *(undefined1 *)((int)src + 4);
  *(undefined1 *)((int)this + 5) = *(undefined1 *)((int)src + 5);
  piVar1 = *(int **)((int)src + 8);
  *(int **)((int)this + 8) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  return;
}

