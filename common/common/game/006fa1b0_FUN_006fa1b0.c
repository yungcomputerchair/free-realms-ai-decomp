// addr: 0x006fa1b0
// name: FUN_006fa1b0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void unknown_setIntAsString(void * object, void * key, int value_) */

void unknown_setIntAsString(void *object,void *key,int value_)

{
  char local_24 [32];
  uint local_4;
  
                    /* Formats an integer value with "%d" into a small stack buffer and forwards it
                       to a common string-setting routine. */
  local_4 = DAT_01b839d8 ^ (uint)local_24;
  _sprintf(local_24,"%d",value_);
  FUN_006f9bb0(object,key,local_24);
  return;
}

