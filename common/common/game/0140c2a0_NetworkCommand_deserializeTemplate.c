// addr: 0x0140c2a0
// name: NetworkCommand_deserializeTemplate
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_deserializeTemplate(void * this, void * reader) */

void __thiscall NetworkCommand_deserializeTemplate(void *this,void *reader)

{
  void *pvVar1;
  char cVar2;
  
                    /* Common deserialize wrapper: calls a virtual read method at vtable+0x10, and
                       if it succeeds calls a virtual finalize/post-read method at vtable+0x14. */
  pvVar1 = reader;
  cVar2 = (**(code **)(*(int *)this + 0x10))(reader,&reader);
  if (cVar2 == '\0') {
    return;
  }
  (**(code **)(*(int *)this + 0x14))(pvVar1);
  return;
}

