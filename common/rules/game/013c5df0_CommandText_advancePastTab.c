// addr: 0x013c5df0
// name: CommandText_advancePastTab
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void CommandText_advancePastTab(undefined4 *param_1)

{
  char *pcVar1;
  
                    /* Splits the current command text at the first tab, NUL-terminates the current
                       token, and advances the cursor after the tab. Evidence: used by
                       Game_receiveCommandText before token parsing. */
  pcVar1 = _strchr((char *)*param_1,9);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
    *param_1 = pcVar1 + 1;
  }
  return;
}

