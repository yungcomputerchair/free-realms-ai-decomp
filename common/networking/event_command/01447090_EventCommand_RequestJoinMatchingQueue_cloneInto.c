// addr: 0x01447090
// name: EventCommand_RequestJoinMatchingQueue_cloneInto
// subsystem: common/networking/event_command
// source (binary assert): common/networking/event_command/EventCommandRequestJoinMatchingQueue.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestJoinMatchingQueue_cloneInto(void * this, void *
   target) */

void __thiscall EventCommand_RequestJoinMatchingQueue_cloneInto(void *this,void *target)

{
  int *this_00;
  void *this_01;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Clone-into implementation: copies the matching-queue object pointer/string
                       and contained map/list members before delegating the EventCommand base clone.
                       The RTTI cast uses
                       EventCommand_RequestJoinMatchingQueue::RTTI_Type_Descriptor and the
                       assert/file evidence names "clone" in
                       EventCommandRequestJoinMatchingQueue.cpp. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01699bd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_01 = (void *)FUN_00d8d382(target,0);
  if (this_01 == (void *)0x0) {
    FUN_012f5a60();
  }
  this_00 = *(int **)((int)this + 0x24);
  if (*(undefined4 **)((int)this_01 + 0x24) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this_01 + 0x24))();
    *(undefined4 *)((int)this_01 + 0x24) = 0;
  }
  if (this_00 != (int *)0x0) {
    pbVar1 = Deck_getPropertyList(this_00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this_01 + 8)
               ,pbVar1,0,0xffffffff);
    uVar2 = (**(code **)(*this_00 + 0x74))();
    *(undefined4 *)((int)this_01 + 0x24) = uVar2;
  }
  EventCommand_ValueList_copyConstruct(&stack0xffffffd8,(void *)((int)this + 0x2c));
  uStack_4 = 0xffffffff;
  EventCommand_RequestJoinMatchingQueue_copyQueueState(this_01,*(void **)((int)this + 0x28));
  EventCommand_cloneInto(this,this_01);
  ExceptionList = local_c;
  return;
}

