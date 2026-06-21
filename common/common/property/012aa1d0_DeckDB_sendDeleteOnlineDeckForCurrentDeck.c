// addr: 0x012aa1d0
// name: DeckDB_sendDeleteOnlineDeckForCurrentDeck
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: uint DeckDB_sendDeleteOnlineDeckForCurrentDeck(void) */

uint DeckDB_sendDeleteOnlineDeckForCurrentDeck(void)

{
  void *pvVar1;
  void *handle;
  undefined4 extraout_EAX;
  void *in_ECX;
  void *in_stack_00000004;
  undefined1 local_30 [32];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a DeckCommand_DeleteOnlineDeck, attaches the current deck property
                       list, sends it through the command path, refreshes deck DB state, and
                       destroys the command. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166c438;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_30;
  ExceptionList = &local_c;
  DeckCommand_DeleteOnlineDeck_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffc8);
  local_4 = 0;
  pvVar1 = Deck_getPropertyList(in_stack_00000004);
  DeckCommand_DeleteOnlineDeck_setDeckName(local_30,pvVar1);
  DisplayActionManager_ensureSingleton();
  CommandHandle_releaseIfPresent(handle);
  pvVar1 = Deck_getPropertyList(in_stack_00000004);
  FixedRecordVector_removeRecordByString(in_ECX,pvVar1);
  local_4 = 0xffffffff;
  DeckCommand_DeleteOnlineDeck_dtor(local_30);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

