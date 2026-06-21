// addr: 0x010d5c80
// name: BaseApi_initDefaults
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BaseApi_initDefaults(void * this) */

void __fastcall BaseApi_initDefaults(void *this)

{
  int iVar1;
  
                    /* Initializes BaseApi default fields, including ports/timeouts and state flags,
                       then logs construction when the associated logger is verbose. The log string
                       explicitly says BaseApi constructed and callers include BaseApi_ctor. */
  if (this == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this + 0xc4;
  }
  *(int *)((int)this + 0xcc) = iVar1;
  *(undefined1 *)((int)this + 0x1f5) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined1 *)((int)this + 0x1fd) = 0;
  *(undefined1 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x31c) = 0;
  *(undefined4 *)((int)this + 0x200) = DAT_01cb9760;
  *(undefined4 *)((int)this + 0x204) = DAT_01cb9764;
  *(undefined4 *)((int)this + 0xbac) = 0;
  *(undefined4 *)((int)this + 0xbb0) = 100;
  *(undefined4 *)((int)this + 800) = 5000;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x1e8) = DAT_01cb9748;
  *(undefined4 *)((int)this + 0x1ec) = DAT_01cb974c;
  iVar1 = *(int *)((int)this + 0x1f0);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x2a8) != '\0')) {
    Log_Info(*(undefined4 *)(iVar1 + 0x278),"BaseApi constructed (%s) defaultPort=%d",iVar1 + 0x23d,
             *(undefined4 *)((int)this + 0x1f8));
  }
  return;
}

