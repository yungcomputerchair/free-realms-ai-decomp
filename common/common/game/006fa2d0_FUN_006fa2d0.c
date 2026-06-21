// addr: 0x006fa2d0
// name: FUN_006fa2d0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void unknown_setBoolAsString(void * object, void * key, bool value_) */

void unknown_setBoolAsString(void *object,void *key,bool value_)

{
  char local_24 [32];
  uint local_4;
  
                    /* Formats a boolean as 0/1 with "%d" into a stack buffer and forwards it to a
                       common string-setting routine. */
  local_4 = DAT_01b839d8 ^ (uint)local_24;
  _sprintf(local_24,"%d",(uint)value_);
  FUN_006f9bb0(object,key,local_24);
  return;
}

