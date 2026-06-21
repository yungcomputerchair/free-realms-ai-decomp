// addr: 0x014c5700
// name: LobbyCommand_DisplayStats_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandDisplayStats.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_DisplayStats_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_DisplayStats_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  void *this_00;
  void *unaff_EDI;
  undefined1 auStack_8 [8];
  
                    /* Copies a LobbyCommand_DisplayStats into a target command, including stat
                       identifiers, a collection at 0xc, string field at 0x2c, and a
                       vector/list-like member at 0x48. Evidence is the RTTI cast and clone
                       assertion in LobbyCommandDisplayStats.cpp. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_DisplayStats::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandDisplayStats.cpp",0xac)
    ;
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  *(undefined4 *)((int)thisObj + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)thisObj + 0x1c) = *(undefined4 *)((int)this + 0x1c);
  StdVector12_assignFromVector((void *)((int)thisObj + 0xc),(int)this + 0xc,(int)unaff_EDI);
  *(undefined4 *)((int)thisObj + 0x20) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)thisObj + 0x24) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)((int)thisObj + 0x28) = *(undefined4 *)((int)this + 0x28);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)thisObj + 0x2c),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x2c),0,0xffffffff);
  this_00 = (void *)((int)thisObj + 0x48);
  if (this_00 != (void *)((int)this + 0x48)) {
    StdTree_eraseRange(this_00,auStack_8,this_00,**(int **)((int)thisObj + 0x4c),(int)this_00,
                       (int)*(int **)((int)thisObj + 0x4c),(int)unaff_EDI);
    StdTree_Node2D_assignFromTree(this_00,(void *)((int)this + 0x48),unaff_EDI);
  }
  return;
}

