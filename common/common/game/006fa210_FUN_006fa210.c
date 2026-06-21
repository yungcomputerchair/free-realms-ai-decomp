// addr: 0x006fa210
// name: FUN_006fa210
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void unknown_setFloatAsString(void * object, void * key, float value_) */

void unknown_setFloatAsString(void *object,void *key,float value_)

{
  char local_24 [32];
  uint local_4;
  
                    /* Formats a float value with "%f" into a stack buffer and forwards it to a
                       common string-setting routine. */
  local_4 = DAT_01b839d8 ^ (uint)local_24;
  _sprintf(local_24,"%f",SUB84((double)value_,0));
  FUN_006f9bb0(object,key,local_24);
  return;
}

