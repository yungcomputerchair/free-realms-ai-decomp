// addr: 0x007dc290
// name: ActorEvent_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ActorEvent_ctor(void * this, int eventId_, int actorId_, int flags_) */

void * __thiscall ActorEvent_ctor(void *this,int eventId_,int actorId_,int flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an ActorEvent by initializing its base event state, installing the
                       ActorEvent vtable, and storing two event fields at offsets 0x44/0x48. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01562748;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007e78e0();
  *(undefined ***)this = ActorEvent::vftable;
  *(int *)((int)this + 0x44) = actorId_;
  *(int *)((int)this + 0x48) = flags_;
  ExceptionList = local_c;
  return this;
}

