// addr: 0x01371b10
// name: Game_getOrCreateCardForForcedID
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * __fastcall
Game_getOrCreateCardForForcedID(void *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint id_;
  void *pvVar2;
  undefined4 *this;
  char *pcVar3;
  undefined4 archetype_;
  int *piVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_434 [4];
  void *local_430;
  undefined4 local_420;
  uint local_41c;
  void *local_418;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_414 [4];
  void *local_410;
  undefined4 local_400;
  uint local_3fc;
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Returns an existing Card or creates one with a forced id, reporting an
                       Exception if the element is missing. Evidence is the embedded Game.cpp
                       message naming getOrCreateCardForForcedID and the creation call that passes
                       both player id and forced card id. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01680e2d;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_434;
  id_ = DAT_01b839d8 ^ (uint)&stack0xfffffbbc;
  ExceptionList = &local_c;
  pvVar2 = find_play_element_in_maps(param_1,param_2);
  piVar4 = (int *)0x0;
  if (pvVar2 == (void *)0x0) {
    local_418 = Mem_Alloc(100);
    local_4 = 0;
    if (local_418 == (void *)0x0) {
      this = (undefined4 *)0x0;
    }
    else {
      this = (undefined4 *)Exception_ctor();
    }
    local_4 = 0xffffffff;
    local_41c = 0xf;
    local_420 = 0;
    local_430 = (void *)((uint)local_430 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_434,"Couldn\'t get card from element may in getOrCreateCardForForcedID!",0x41);
    local_4 = 1;
    Exception_setMessage(this,local_434);
    local_4 = 0xffffffff;
    if (0xf < local_41c) {
                    /* WARNING: Subroutine does not return */
      _free(local_430);
    }
    local_41c = 0xf;
    local_420 = 0;
    local_430 = (void *)((uint)local_430 & 0xffffff00);
    local_3fc = 0xf;
    local_400 = 0;
    local_410 = (void *)((uint)local_410 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_414,"Game.cpp",8);
    local_4 = 2;
    Exception_setSourceFile(this,local_414);
    local_4 = 0xffffffff;
    if (0xf < local_3fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_410);
    }
    local_3fc = 0xf;
    local_400 = 0;
    local_410 = (void *)((uint)local_410 & 0xffffff00);
    _sprintf(local_3f8,"Card: %d, player: %d",param_3);
    pcVar3 = local_3f8;
    local_41c = 0xf;
    local_420 = 0;
    local_430 = (void *)((uint)local_430 & 0xffffff00);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_434,local_3f8,(int)pcVar3 - (int)(local_3f8 + 1));
    local_4 = 3;
    Exception_setFunctionName(this,local_434);
    local_4 = 0xffffffff;
    if (0xf < local_41c) {
                    /* WARNING: Subroutine does not return */
      _free(local_430);
    }
    local_41c = 0xf;
    local_420 = 0;
    local_430 = (void *)((uint)local_430 & 0xffffff00);
    if (*(char *)((int)param_1 + 0x14d) == '\0') {
      Exception_setPlayerID(this,*(int *)((int)param_1 + 0x13c));
      Game_sendExceptionToPlayer(param_1,this);
    }
    else {
      Exception_setFatal(this,'\x01');
      Game_handleException(this);
    }
    if (this != (undefined4 *)0x0) {
      (**(code **)*this)(1);
    }
    local_418 = Mem_Alloc(0x140);
    local_4 = 4;
    if (local_418 != (void *)0x0) {
      piVar4 = Card_ctor(local_418,archetype_,id_);
    }
    local_4 = 0xffffffff;
    (**(code **)(*piVar4 + 0x40))(param_1,param_4,param_3);
  }
  else {
    piVar4 = (int *)FUN_00d8d382(pvVar2,0,&PlayElement::RTTI_Type_Descriptor,
                                 &Card::RTTI_Type_Descriptor,0);
  }
  ExceptionList = local_c;
  return piVar4;
}

