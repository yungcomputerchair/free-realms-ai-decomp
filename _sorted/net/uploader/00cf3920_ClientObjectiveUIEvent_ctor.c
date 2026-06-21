// addr: 0x00cf3920
// name: ClientObjectiveUIEvent_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientObjectiveUIEvent_ctor(void * this, int objectiveId_, int
   eventType_, char * name) */

void * __thiscall ClientObjectiveUIEvent_ctor(void *this,int objectiveId_,int eventType_,char *name)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ClientObjectiveUIEvent, initializes base/list fields and an
                       empty SoeUtil::IString, stores objective/event identifiers, and copies the
                       supplied string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016102eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(int *)((int)this + 0x14) = eventType_;
  *(undefined1 *)((int)this + 0x1d) = 0;
  *(int *)((int)this + 0x18) = objectiveId_;
  *(undefined1 *)((int)this + 0x1c) = 1;
  *(undefined ***)this = ClientObjectiveUIEvent::vftable;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined ***)((int)this + 0x20) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x24) = &DAT_01bf1d61;
  FUN_006f9e60(name);
  ExceptionList = local_c;
  return this;
}

