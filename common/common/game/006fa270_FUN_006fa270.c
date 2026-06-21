// addr: 0x006fa270
// name: FUN_006fa270
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void unknown_setDoubleAsString(void * object, void * key, double value_) */

void unknown_setDoubleAsString(void *object,void *key,double value_)

{
  char local_24 [32];
  uint local_4;
  
                    /* Formats a double value with "%f" into a stack buffer and forwards it to a
                       common string-setting routine. */
  local_4 = DAT_01b839d8 ^ (uint)local_24;
  _sprintf(local_24,"%f",SUB84(value_,0));
  FUN_006f9bb0(object,key,local_24);
  return;
}

