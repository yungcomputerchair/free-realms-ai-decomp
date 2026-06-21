// addr: 0x00418662
// name: EventListenerRecord_assign
// subsystem: common/client/event
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventListenerRecord_assign(void * this, void * other) */

void * __thiscall EventListenerRecord_assign(void *this,void *other)

{
                    /* Assigns a 0x30-byte event-listener record, retaining the incoming
                       listener/target pointers and releasing old pointers before copying scalar
                       filter fields. */
  *(undefined2 *)this = *(undefined2 *)other;
  if (*(int **)((int)other + 4) != (int *)0x0) {
    (**(code **)(**(int **)((int)other + 4) + 0xc))();
  }
  if (*(int **)((int)this + 4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 4) + 0x10))(0);
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)other + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)other + 8);
  FUN_004d93dc((int)other + 0xc);
  if (*(int **)((int)other + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)((int)other + 0x2c) + 0xc))();
  }
  if (*(int **)((int)this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x2c) + 0x10))(0);
  }
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)other + 0x2c);
  return this;
}

