// addr: 0x0150fee0
// name: FUN_0150fee0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void queue_add_game_text_defaults(void) */

void queue_add_game_text_defaults(void)

{
  int iVar1;
  int in_ECX;
  
                    /* Queues two fixed message/text ids using the current object context. Exact
                       owning command/state class is not identifiable. */
  iVar1 = StateMachineState_getGame();
  set_pair_fields_4_8((void *)(in_ECX + 0x54),0x28bc,*(uint *)(iVar1 + 0x20));
  iVar1 = StateMachineState_getGame();
  set_pair_fields_4_8((void *)(in_ECX + 0x70),0x28bd,*(uint *)(iVar1 + 0x20));
  return;
}

