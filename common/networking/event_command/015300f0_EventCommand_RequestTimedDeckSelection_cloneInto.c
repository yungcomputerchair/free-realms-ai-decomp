// addr: 0x015300f0
// name: EventCommand_RequestTimedDeckSelection_cloneInto
// subsystem: common/networking/event_command
// source (binary assert): common/networking/event_command/EventCommandRequestTimedDeckSelection.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestTimedDeckSelection_cloneInto(void * this, void *
   target) */

void __fastcall EventCommand_RequestTimedDeckSelection_cloneInto(void *this,void *target)

{
  void *this_00;
  undefined1 *puStack00000004;
  int in_stack_ffffffcc;
  uint uVar1;
  void *allocation;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Clone-into implementation: copies two scalar fields and the string at +0x10
                       through the string assignment helper before cloning the base. The RTTI cast
                       uses EventCommand_RequestTimedDeckSelection::RTTI_Type_Descriptor and the
                       assert/file evidence names "clone" in
                       EventCommandRequestTimedDeckSelection.cpp. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016bb268;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = 0x153012c;
  this_00 = (void *)FUN_00d8d382();
  if (this_00 == (void *)0x0) {
    FUN_012f5a60();
  }
  puStack00000004 = &stack0xffffffcc;
  *(undefined4 *)((int)this_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  allocation = (void *)(uVar1 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0xffffffcc,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x10),0,0xffffffff);
  uStack_4 = 0xffffffff;
  EventCommand_RequestTimedDeckSelection_assignDeckName(this_00,in_stack_ffffffcc,allocation);
  EventCommand_cloneInto(this,this_00);
  ExceptionList = local_c;
  return;
}

