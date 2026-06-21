// addr: 0x01013260
// name: FUN_01013260
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_01013260(void * oldIndex) */

void __fastcall FUN_01013260(void *oldIndex)

{
  undefined4 uVar1;
  
                    /* Initializes a structure containing a
                       SoeUtil::Array<VideoCapture::AVI::MyOLDINDEXENTRY>. This is video capture/AVI
                       code, likely weakly misclassified outside uploader. */
  uVar1 = DAT_0187d234;
  *(undefined4 *)oldIndex = DAT_01cb6094;
  *(undefined4 *)((int)oldIndex + 4) = uVar1;
  *(undefined ***)((int)oldIndex + 8) =
       SoeUtil::Array<VideoCapture::AVI::MyOLDINDEXENTRY,0,1>::vftable;
  *(undefined4 *)((int)oldIndex + 0xc) = 0;
  *(undefined4 *)((int)oldIndex + 0x10) = 0;
  *(undefined4 *)((int)oldIndex + 0x14) = 0;
  return;
}

