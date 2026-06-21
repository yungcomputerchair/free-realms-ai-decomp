// addr: 0x013e3120
// name: MatchDialog_openAndRequestJoinQueue
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void MatchDialog_openAndRequestJoinQueue(void * this) */

void __fastcall MatchDialog_openAndRequestJoinQueue(void *this)

{
  void *pvVar1;
  void *this_00;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  uint displayActionId_;
  void *handle;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_48 [4];
  void *local_44;
  undefined4 local_34;
  uint local_30;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Opens matchDialog.swf with selected deck metadata and sends
                       EventCommand_RequestJoinMatchingQueue for the selected deck. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168d4f0;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_48;
  ExceptionList = &local_c;
  pvVar1 = (void *)((int)this + 0x5c);
  pvVar2 = pvVar1;
  this_00 = (void *)FUN_012aab80(pvVar1,DAT_01b839d8 ^ (uint)&stack0xffffffa8);
  pvVar2 = DeckDB_getDeck(this_00,pvVar2);
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_48,"OpenDialog",10);
  local_4 = 0;
  uVar3 = FUN_012ec220(local_48);
  local_4 = 0xffffffff;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  FUN_012ebe00("SelectedDeckID",pvVar1);
  FUN_012ebde0("ScreenName","MatchDialog");
  FUN_012ebde0("DialogName","matchDialog.swf");
  FUN_012ebde0("CancelCallback","CancelJoinMatchingQueue");
  FUN_012e5730(uVar3);
  FUN_012e5820(uVar3);
  DisplayActionManager_ensureSingleton();
  iVar4 = FUN_012d08e0();
  if (iVar4 != 0) {
    FUN_01446c50();
    local_4 = 1;
    displayActionId_ = FUN_013a3480();
    EventCommand_setDisplayActionId(local_48,displayActionId_);
    EventCommand_RequestJoinMatchingQueue_setDeck(local_48,pvVar2);
    DisplayActionManager_ensureSingleton();
    CommandHandle_releaseIfPresent(handle);
    local_4 = 0xffffffff;
    EventCommand_RequestJoinMatchingQueue_dtor(local_48);
  }
  ExceptionList = local_c;
  return;
}

