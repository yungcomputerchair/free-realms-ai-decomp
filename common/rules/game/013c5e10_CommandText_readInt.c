// addr: 0x013c5e10
// name: CommandText_readInt
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void CommandText_readInt(undefined4 *param_1)

{
  char *_Str;
  char *pcVar1;
  
                    /* Reads the current tab-delimited token as an integer with atol and advances
                       the cursor to the next token. Evidence: _strchr tab split followed by _atol,
                       heavily used by command parsing. */
  _Str = (char *)*param_1;
  pcVar1 = _strchr(_Str,9);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
    *param_1 = pcVar1 + 1;
  }
  _atol(_Str);
  return;
}

