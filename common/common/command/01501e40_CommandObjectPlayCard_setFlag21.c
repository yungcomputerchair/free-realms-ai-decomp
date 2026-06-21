// addr: 0x01501e40
// name: CommandObjectPlayCard_setFlag21
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectPlayCard_setFlag21(void * this, bool value) */

void CommandObjectPlayCard_setFlag21(void *this,bool value)

{
                    /* Sets boolean property id 0x21 on a CommandObjectPlayCard-style property bag.
                       The known caller enables it when action-node flags at offsets 0x18/0x19 are
                       set. */
  set_value_boolean(0x21,SUB41(this,0));
  return;
}

