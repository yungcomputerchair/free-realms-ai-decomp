// addr: 0x00cfa510
// name: MessageHandlerColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * MessageHandlerColumn_getName(int param_1)

{
                    /* Returns labels Index, MessageType, and Function for a message-handler mapping
                       row. */
  if (param_1 == 0) {
    return "Index";
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return "<error>";
    }
    return "Function";
  }
  return "MessageType";
}

