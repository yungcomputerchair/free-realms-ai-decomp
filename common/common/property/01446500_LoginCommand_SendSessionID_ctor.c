// addr: 0x01446500
// name: LoginCommand_SendSessionID_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LoginCommand_SendSessionID_ctor(void * this) */

void * __fastcall LoginCommand_SendSessionID_ctor(void *this)

{
  void *out;
  void *this_00;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  undefined4 *puVar2;
  int extraout_EAX;
  void *this_01;
  uint uVar3;
  uint *puVar4;
  int extraout_EAX_00;
  undefined4 uVar5;
  void *local_30;
  void *local_2c;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a LoginCommand_SendSessionID, initializes its strings/map, fills
                       primary/secondary token and object fields, and stores login command property
                       ids. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01699987;
  local_c = ExceptionList;
  out = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffc0);
  ExceptionList = &local_c;
  local_2c = this;
  LoginCommand_ctor(this);
  *(undefined ***)this = LoginCommand_SendSessionID::vftable;
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  RbTree_initHeader((void *)((int)this + 0x20));
  *(undefined4 *)((int)this + 0x44) = 0xf;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x60) = 0xf;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0xf;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0xf;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined1 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0xf;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined1 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0xf;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined1 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0xf;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined1 *)((int)this + 0xdc) = 0;
  local_4._0_1_ = 9;
  LoginService_getInstance();
  local_30 = this_00;
  pbVar1 = LoginCommandTemplate_getPrimaryToken(this_00,(int)local_28,out);
  local_4._0_1_ = 10;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             pbVar1,0,0xffffffff);
  local_4._0_1_ = 9;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pbVar1 = LoginCommandTemplate_getSecondaryToken(local_30,(int)local_28,out);
  local_4._0_1_ = 0xb;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0xa0),
             pbVar1,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,9);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pbVar1 = PropertyObject_getField104(local_30);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0xbc),
             pbVar1,0,0xffffffff);
  pbVar1 = PropertyObject_getField120(local_30);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0xd8),
             pbVar1,0,0xffffffff);
  *(undefined1 *)((int)this + 100) = 0;
  local_30 = (void *)0x1;
  puVar2 = (undefined4 *)IntPropertyMap_getOrCreateSlot(&local_30);
  *puVar2 = 0x4c4;
  ArchetypeDB_getInstance();
  if (extraout_EAX != 0) {
    ArchetypeDB_getInstance();
    uVar3 = Archetype_getField3c(this_01);
    local_30 = (void *)0x2;
    puVar4 = (uint *)IntPropertyMap_getOrCreateSlot(&local_30);
    *puVar4 = uVar3;
  }
  ActionDB_ensureSingleton();
  if (extraout_EAX_00 != 0) {
    ActionDB_ensureSingleton();
    uVar5 = FUN_012b9c50();
    local_30 = (void *)0x4;
    puVar2 = (undefined4 *)IntPropertyMap_getOrCreateSlot(&local_30);
    *puVar2 = uVar5;
  }
  ExceptionList = local_c;
  return this;
}

