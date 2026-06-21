// addr: 0x01348830
// name: Game_setBatchControl
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_setBatchControl(void * this, int batchControl) */

void __thiscall Game_setBatchControl(void *this,int batchControl)

{
                    /* Stores the GameCommandBatchControl value into Game offset 0x150. Evidence is
                       the sole caller GameCommandBatchControl.cpp, which validates mGame and passes
                       the command field at +0x24. */
  *(int *)((int)this + 0x150) = batchControl;
  return;
}

