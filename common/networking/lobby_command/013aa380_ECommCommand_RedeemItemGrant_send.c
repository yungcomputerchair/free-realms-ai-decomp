// addr: 0x013aa380
// name: ECommCommand_RedeemItemGrant_send
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ECommCommand_RedeemItemGrant_send(int itemGrantId, int itemId, char
   consumeGrant) */

void ECommCommand_RedeemItemGrant_send(int itemGrantId,int itemId,char consumeGrant)

{
  void *handle;
  undefined3 in_stack_0000000d;
  undefined1 local_30 [36];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an ECommCommand_RedeemItemGrant, sets two dword fields and a
                       boolean byte, sends it, and destroys it. Evidence: ctor/dtor callees install
                       ECommCommand_RedeemItemGrant::vftable and setters write offsets 8, 0xc, and
                       0x1c. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016865e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ECommCommand_RedeemItemGrant_ctor(local_30);
  local_4 = 0;
  ECommCommand_RedeemItemGrant_setField8(local_30,itemGrantId);
  ECommCommand_RedeemItemGrant_setFieldC(local_30,itemId);
  ECommCommand_RedeemItemGrant_setFlag1c(local_30,_consumeGrant);
  DisplayActionManager_ensureSingleton();
  CommandHandle_releaseIfPresent(handle);
  local_4 = 0xffffffff;
  ECommCommand_RedeemItemGrant_dtor(local_30);
  ExceptionList = local_c;
  return;
}

