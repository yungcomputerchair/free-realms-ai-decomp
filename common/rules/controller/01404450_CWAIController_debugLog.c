// addr: 0x01404450
// name: CWAIController_debugLog
// subsystem: common/rules/controller
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWAIController_debugLog(void * this, char * format, undefined4) */

void __cdecl CWAIController_debugLog(void *this,char *format,undefined4 param_3)

{
                    /* Writes a formatted message to the 'wa_ai' log channel only when the
                       CWAIController debug flag at +0x14 is set. */
  if (*(char *)((int)this + 0x14) != '\0') {
    IndexedLog_vprintf(*(void **)((int)this + 0x10),"wa_ai",format,&param_3);
  }
  return;
}

