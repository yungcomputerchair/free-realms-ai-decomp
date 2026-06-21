// addr: 0x0141aa40
// name: GameCommand_StateSpecificMessage_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandStateSpecificMessage.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandStateSpecificMessage_doCommand(void * this) */

void __fastcall GameCommand_StateSpecificMessage_execute(void *this)

{
                    /* Executes a StateSpecificMessage game command after asserting mGame is
                       present. It runs the common GameCommand pre-dispatch routine, then calls the
                       game vtable slot with player id and state-specific message fields from
                       offsets 0x24-0x34. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandStateSpecificMessage.cpp"
                 ,0xda);
  }
  GameCommand_execute(this);
  (**(code **)(**(int **)((int)this + 8) + 0xf8))
            (*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 0x30),
             *(undefined4 *)((int)this + 0x34),*(undefined4 *)((int)this + 0x24),
             *(undefined4 *)((int)this + 0x28),*(undefined4 *)((int)this + 0x2c),1);
  return;
}

