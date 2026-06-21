// addr: 0x0136b720
// name: GameCommand_recordOrExecute
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_recordOrExecute(void * this, void * command) */

void __thiscall GameCommand_recordOrExecute(void *this,void *command)

{
  void *this_00;
  uint value;
  void *unaff_ESI;
  void *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* When the game command is not in the special state, records a fixed-size entry
                       if the history/vector is full enough, then forwards the command to the
                       processing helper. Evidence is caller GameCommand_execute,
                       FixedRecordVector_insertRecord, and the state flag/vector capacity checks. */
  if (*(char *)((int)this + 0x14d) != '\x01') {
    this_00 = (void *)((int)this + 0x2f4);
    if ((*(int *)((int)this + 0x2f8) == 0) ||
       ((uint)((*(int *)((int)this + 0x2fc) - *(int *)((int)this + 0x2f8)) / 0x1c) < 0x19)) {
      StdVector28_pushBack(this_00,command,unaff_ESI);
      return;
    }
    value = *(uint *)((int)this + 0x2f8);
    if (*(uint *)((int)this + 0x2fc) < value) {
      FUN_00d83c2d();
    }
    FixedRecordVector_insertRecord(this_00,local_8,this_00,value,(int)unaff_EDI);
    StdVector28_pushBack(this_00,command,unaff_EDI);
  }
  return;
}

