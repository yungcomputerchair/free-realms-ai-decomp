// addr: 0x00843e90
// name: GFxWrap_initializeFlashMoviePlayer
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void GFxWrap_initializeFlashMoviePlayer(void * device, void * presentParams,
   undefined4 hwnd_) */

void __cdecl GFxWrap_initializeFlashMoviePlayer(void *device,void *presentParams,HWND__ *hwnd_)

{
  uint uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes the GFx/Flash movie player for a Direct3D9 device, lazily creates
                       global wrapper/string state, stores the D3D device, and calls
                       GFxWrap::InitFlashMoviePlayer. Evidence is the named GFxWrap call and
                       Direct3D parameter types. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156ee26;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  if (DAT_01be15dc == 0) {
    pvVar2 = Mem_Alloc(0x114);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      DAT_01be15dc = 0;
    }
    else {
      DAT_01be15dc = FUN_00843e30(uVar1);
    }
  }
  local_4 = 0xffffffff;
  GFxWrap::InitFlashMoviePlayer(device,presentParams,hwnd_);
  _DAT_01be15cc = device;
  DAT_01be15ca = 1;
  if (DAT_01be15d4 == (undefined4 *)0x0) {
    DAT_01be15d4 = Mem_Alloc(0x10);
    if (DAT_01be15d4 == (undefined4 *)0x0) {
      DAT_01be15d4 = (undefined4 *)0x0;
    }
    else {
      *DAT_01be15d4 = SoeUtil::IString<char>::vftable;
      DAT_01be15d4[1] = &DAT_01be1964;
      DAT_01be15d4[3] = 0;
      DAT_01be15d4[2] = 0;
    }
    local_4 = 0xffffffff;
  }
  FUN_0045a226(&PTR_vftable_01b36748);
  ExceptionList = local_c;
  return;
}

