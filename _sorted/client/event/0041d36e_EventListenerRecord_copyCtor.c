// addr: 0x0041d36e
// name: EventListenerRecord_copyCtor
// subsystem: common/client/event
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventListenerRecord_copyCtor(void * this, void * other) */

void * __thiscall EventListenerRecord_copyCtor(void *this,void *other)

{
  int iVar1;
  undefined4 *puVar2;
  
                    /* Initializes a listener record to zero/default state and then assigns from
                       another record, preserving retain/release semantics. */
  *(undefined2 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined2 *)((int)this + 0x28) = 0;
  puVar2 = (undefined4 *)((int)this + 0x10);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  EventListenerRecord_assign(this,other);
  return this;
}

