// addr: 0x01522820
// name: CommandPayload_writeThreeFieldsAndStackValue
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandPayload_writeThreeFieldsAndStackValue(int a_, int b_, bool c_) */

void CommandPayload_writeThreeFieldsAndStackValue(int a_,int b_,bool c_)

{
                    /* Writes three scalar fields and an additional stack argument through a common
                       output helper. Exact command type is not named. */
  FUN_0042c155(&a_);
  b_ = b_ & 0xff;
  FUN_0042c155(&b_);
  b_ = (int)c_;
  FUN_0042c155(&b_);
  FUN_0042c155(&stack0x00000010);
  return;
}

