// addr: 0x010da880
// name: IPv4Address_toString
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * __thiscall IPv4Address_toString(byte *param_1,char *param_2,int param_3)

{
                    /* Formats the first four bytes of an address as dotted decimal into the caller
                       buffer when the buffer length is at least 16, otherwise returns an empty
                       string. */
  if (param_3 < 0x10) {
    *param_2 = '\0';
    return param_2;
  }
  _sprintf(param_2,"%d.%d.%d.%d",(uint)*param_1);
  return param_2;
}

