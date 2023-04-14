// WARNING: Do not modify! Generated file.

namespace UnityEngine.Purchasing.Security {
    public class GooglePlayTangle
    {
        private static byte[] data = System.Convert.FromBase64String("Jv0k9D2eop19a4bwdKzp1F8IzmWZvUrp3j8W1BOLyEpRuqF3CFv1x7RbiSs4dZ9qiUcpDMjk+r6tAOvYIs8xFtWxLuvDXk/fMczYLEa/M6dfVaU/FbzIJhR6z/uvqJ41YnY8zPNq051rHhBEJ5BcJOJOA19429A9C/03piaV5mvHmXhwfStbJ4v5CbwL05l+s+GHvNq8+ej5VCfRnEC/Z2fNmShdvryXPJHao1+RnjkUykuKbtxffG5TWFd02BbYqVNfX19bXl3cX1FebtxfVFzcX19e2D82UCJb2YkClBmd+4V7MtGoM2cHiG+pyPJcS2zNhe6KBIcBx+hx3NsOn75oVELsFEZB9Xvs9wbhMRFVFnoP8xurJ/bdPPU6/Dcst1xdX15f");
        private static int[] order = new int[] { 3,7,5,10,8,6,9,13,11,10,13,12,13,13,14 };
        private static int key = 94;

        public static readonly bool IsPopulated = true;

        public static byte[] Data() {
        	if (IsPopulated == false)
        		return null;
            return Obfuscator.DeObfuscate(data, order, key);
        }
    }
}
