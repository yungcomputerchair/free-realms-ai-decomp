// addr: 0x015216d0
// name: CommandPayload_writeFourFields
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandPayload_writeFourFields(int a_, int b_, bool c_, int d_) */

void CommandPayload_writeFourFields(int a_,int b_,bool c_,int d_)

{
                    /* Writes four scalar fields through a common output helper, masking the second
                       to a byte and expanding the bool. Exact command type is not named. */
  FUN_0042c155(&a_);
  b_ = b_ & 0xff;
  FUN_0042c155(&b_);
  b_ = (int)c_;
  FUN_0042c155(&b_);
  b_ = d_;
  FUN_0042c155(&b_);
  return;
}

