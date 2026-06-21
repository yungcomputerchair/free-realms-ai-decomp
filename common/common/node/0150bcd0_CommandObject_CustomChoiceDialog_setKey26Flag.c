// addr: 0x0150bcd0
// name: CommandObject_CustomChoiceDialog_setKey26Flag
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_CustomChoiceDialog_setKey26Flag(bool enabled_) */

void CommandObject_CustomChoiceDialog_setKey26Flag(bool enabled_)

{
                    /* Sets boolean command-property key 0x26 on a CustomChoiceDialog command.
                       ActionNode.cpp calls it when an optional node-key 0x2a entry is present for
                       the custom dialog. */
  set_value_boolean(0x26,enabled_);
  return;
}

