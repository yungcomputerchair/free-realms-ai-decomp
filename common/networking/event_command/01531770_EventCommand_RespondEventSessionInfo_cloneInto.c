// addr: 0x01531770
// name: EventCommand_RespondEventSessionInfo_cloneInto
// subsystem: common/networking/event_command
// source (binary assert): common/networking/event_command/EventCommandRespondEventSessionInfo.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondEventSessionInfo_cloneInto(void * this, void *
   target) */

void __fastcall EventCommand_RespondEventSessionInfo_cloneInto(void *this,void *target)

{
  void *this_00;
  undefined1 *puStack00000004;
  void *in_stack_ffffffc4;
  uint uVar1;
  void *pvVar2;
  TypeDescriptor *unused;
  char *pcVar3;
  void *source_tree;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Clone-into implementation: copies event-session response scalar fields,
                       strings, and contained collections before cloning the EventCommand base. The
                       RTTI cast uses EventCommand_RespondEventSessionInfo::RTTI_Type_Descriptor and
                       the assert/file evidence names "clone" in
                       EventCommandRespondEventSessionInfo.cpp. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016bb680;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  unused = &NetworkCommand::RTTI_Type_Descriptor;
  uVar1 = 0x15317ae;
  this_00 = (void *)FUN_00d8d382();
  if (this_00 == (void *)0x0) {
    pcVar3 = "clone";
    FUN_012f5a60();
    unused = (TypeDescriptor *)pcVar3;
  }
  *(undefined4 *)((int)this_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this_00 + 0x24) = *(undefined4 *)((int)this + 0x24);
  *(undefined1 *)((int)this_00 + 0x28) = *(undefined1 *)((int)this + 0x28);
  *(undefined4 *)((int)this_00 + 0x2c) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)((int)this_00 + 0x30) = *(undefined4 *)((int)this + 0x30);
  puStack00000004 = &stack0xffffffc4;
  *(undefined4 *)((int)this_00 + 0x34) = *(undefined4 *)((int)this + 0x34);
  *(undefined4 *)((int)this_00 + 0x38) = *(undefined4 *)((int)this + 0x38);
  pvVar2 = (void *)(uVar1 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0xffffffc4,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x3c),0,0xffffffff);
  uStack_4 = 0xffffffff;
  EventCommand_RespondEventSessionInfo_assignTitle(this_00,(int)in_stack_ffffffc4,pvVar2);
  puStack00000004 = &stack0xffffffc4;
  source_tree = (void *)0x0;
  pvVar2 = (void *)((uint)pvVar2 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0xffffffc4,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x58),0,0xffffffff);
  uStack_4 = 0xffffffff;
  EventCommand_RespondEventSessionInfo_assignString58FromTemp(this_00,in_stack_ffffffc4,pvVar2);
  puStack00000004 = &stack0xffffffd4;
  EventCommand_ValueList_copyConstruct(&stack0xffffffd4,(void *)((int)this + 0xc));
  uStack_4 = 0xffffffff;
  EventCommand_RespondEventSessionInfo_cloneFirstIntVectorMap(this_00,unused,source_tree);
  puStack00000004 = &stack0xffffffd4;
  EventCommand_ValueList_copyConstruct(&stack0xffffffd4,(void *)((int)this + 0x18));
  uStack_4 = 0xffffffff;
  EventCommand_RespondEventSessionInfo_cloneSecondIntVectorMap(this_00,unused,source_tree);
  *(undefined4 *)((int)this_00 + 0x74) = *(undefined4 *)((int)this + 0x74);
  *(undefined4 *)((int)this_00 + 0x74) = *(undefined4 *)((int)this + 0x78);
  EventCommand_cloneInto(this,this_00);
  ExceptionList = local_c;
  return;
}

