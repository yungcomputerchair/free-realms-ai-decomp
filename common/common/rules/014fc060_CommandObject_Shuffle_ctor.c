// addr: 0x014fc060
// name: CommandObject_Shuffle_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_Shuffle_ctor(void * this, int pileCode_, void *
   environment) */

void * __thiscall CommandObject_Shuffle_ctor(void *this,int pileCode_,void *environment)

{
  void *pvVar1;
  int iVar2;
  int elementId_;
  undefined4 uVar3;
  TypeDescriptor *pTVar4;
  TypeDescriptor *pTVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *name;
  undefined4 uVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs CommandObject_Shuffle, storing a pile/target code and resolving a
                       default player pile when needed. Initializes origin/source fields and clears
                       inherited command flags. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b37f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(this,environment);
  local_4 = 0;
  *(undefined ***)this = CommandObject_Shuffle::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_Shuffle::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_Shuffle",0x15);
  *(int *)((int)this + 0x124) = pileCode_;
  pvVar1 = EvaluationEnvironment_getGame(environment);
  *(void **)((int)this + 0x30) = pvVar1;
  pvVar1 = EvaluationEnvironment_getMember14(environment);
  *(void **)((int)this + 0x128) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_28,"player1",7);
    local_4._0_1_ = 1;
    name = local_28;
    pvVar1 = EvaluationEnvironment_getGame(environment);
    Game_findNamedEntryValue(pvVar1,name);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
    uVar6 = 0;
    pTVar5 = &Card::RTTI_Type_Descriptor;
    pTVar4 = &PlayElement::RTTI_Type_Descriptor;
    uVar3 = 0;
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pvVar1 = EvaluationEnvironment_getGame(environment);
    pvVar1 = find_play_element_in_maps(pvVar1,elementId_);
    iVar2 = FUN_00d8d382(pvVar1,uVar3,pTVar4,pTVar5,uVar6);
    if (iVar2 != 0) {
      uVar3 = FUN_013402b0();
      *(undefined4 *)((int)this + 0x128) = uVar3;
    }
  }
  pvVar1 = EvaluationEnvironment_getOriginCard(environment);
  *(void **)((int)this + 100) = pvVar1;
  *(undefined1 *)((int)this + 0x81) = 0;
  ExceptionList = local_c;
  return this;
}

