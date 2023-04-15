// WARNING: Do not modify! Generated file.

namespace UnityEngine.Purchasing.Security {
    public class GooglePlayTangle
    {
        private static byte[] data = System.Convert.FromBase64String("1/MEp5BxWJpdxYYEH/TvOUYVu4lsgX9Ym/9gpY0QAZF/gpZiCPF96cdM2lfTtcs1fJ/mfSlJxiHnhrwSERvrcVvyhmhaNIG14ebQeyw4coKiWggPuzWiuUivf18bWDRBvVXlaSmD12YT8PLZct+U7RHf0HdahAXERZ3XMP2vyfKU8remtxppn9IO8Sm9JJ3TJVBeCmneEmqsAE0RNpWec5IRHxAgkhEaEpIRERCWcXgebBWXBSKDy6DESslPiaY/kpVA0fAmGgz6FcdldjvRJMcJZ0KGqrTw406llmizarpz0OzTMyXIvjrip5oRRoArRbN56GjbqCWJ1zY+M2UVacW3R/IgkhEyIB0WGTqWWJbnHRERERUQE7iTcrt0snli+RITERAR");
        private static int[] order = new int[] { 7,10,12,8,4,11,13,13,10,12,11,11,12,13,14 };
        private static int key = 16;

        public static readonly bool IsPopulated = true;

        public static byte[] Data() {
        	if (IsPopulated == false)
        		return null;
            return Obfuscator.DeObfuscate(data, order, key);
        }
    }
}
